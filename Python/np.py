from datetime import datetime

FILE_NAME = "todo_list.txt"

def add_task():
    task_name = input("Enter Task Name: ")
    date_input = input("Enter Date (YYYY-MM-DD): ")
    day_of_week = input("Enter Day of the Week: ")
    time_input = input("Enter Time (HH:MM, 24-hour format): ")

    # Validate date and time
    try:
        datetime.strptime(date_input, "%Y-%m-%d")
        datetime.strptime(time_input, "%H:%M")
    except ValueError:
        print("Invalid date or time format.")
        return

    task_line = f"{task_name} {date_input} {day_of_week} {time_input}\n"
    with open(FILE_NAME, "a") as file:
        file.write(task_line)
    print("Task added successfully!\n")

def read_and_display_tasks():
    tasks = []
    try:
        with open(FILE_NAME, "r") as file:
            for line in file:
                parts = line.strip().split(" ")
                if len(parts) >= 4:
                    task_name = " ".join(parts[:-3])  # In case task name has spaces
                    date = parts[-3]
                    day = parts[-2]
                    time = parts[-1]
                    try:
                        datetime_obj = datetime.strptime(f"{date} {time}", "%Y-%m-%d %H:%M")
                        tasks.append((datetime_obj, task_name, date, day, time))
                    except ValueError:
                        print(f"Skipping invalid task format: {line.strip()}")
    except FileNotFoundError:
        print("No tasks found. Add some tasks first.")
        return

    tasks.sort(key=lambda x: x[0])  # Sort by datetime

    print("\n--- To-Do List (Sorted) ---")
    for _, name, date, day, time in tasks:
        print(f"Task: {name} | Date: {date} | Day: {day} | Time: {time}")
    print()

def main():
    while True:
        print("1. Add Task")
        print("2. View Tasks")
        print("3. Exit")
        choice = input("Enter your choice (1-3): ")

        if choice == '1':
            add_task()
        elif choice == '2':
            read_and_display_tasks()
        elif choice == '3':
            print("Goodbye!")
            break
        else:
            print("Invalid choice. Try again.\n")

if __name__ == "__main__":
    main()
