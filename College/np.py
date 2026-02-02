import pygame
import random
import sys

pygame.init()

WIDTH = 400
HEIGHT = 600
SCREEN = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Flappy Bird")

WHITE = (255, 255, 255)
GREEN = (0, 200, 0)
BLUE = (0, 150, 255)

# Bird settings
bird_x = 50
bird_y = 300
bird_radius = 15
bird_velocity = 0
gravity = 0.5
jump_strength = -8

# Pipe settings
pipe_width = 70
pipe_gap = 150
pipe_x = WIDTH
pipe_height_top = random.randint(50, 350)

# Game variables
score = 0
font = pygame.font.SysFont("Arial", 30)

clock = pygame.time.Clock()


def draw_bird():
    pygame.draw.circle(SCREEN, BLUE, (bird_x, int(bird_y)), bird_radius)


def draw_pipes():
    pygame.draw.rect(SCREEN, GREEN, (pipe_x, 0, pipe_width, pipe_height_top))
    bottom_pipe_y = pipe_height_top + pipe_gap
    pygame.draw.rect(SCREEN, GREEN, (pipe_x, bottom_pipe_y, pipe_width, HEIGHT))


def show_score():
    text = font.render(f"Score: {score}", True, WHITE)
    SCREEN.blit(text, (10, 10))


def reset_game():
    global bird_y, bird_velocity, pipe_x, pipe_height_top, score
    bird_y = 300
    bird_velocity = 0
    pipe_x = WIDTH
    pipe_height_top = random.randint(50, 350)
    score = 0


# Game Loop
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_SPACE:  # Jump
                bird_velocity = jump_strength

    # Bird physics
    bird_velocity += gravity
    bird_y += bird_velocity

    # Pipe movement
    pipe_x -= 3
    if pipe_x < -pipe_width:
        pipe_x = WIDTH
        pipe_height_top = random.randint(50, 350)
        score += 1

    # Collision detection
    bottom_pipe_y = pipe_height_top + pipe_gap

    if bird_y - bird_radius < 0 or bird_y + bird_radius > HEIGHT:
        reset_game()

    if (pipe_x < bird_x < pipe_x + pipe_width):
        if bird_y < pipe_height_top or bird_y > bottom_pipe_y:
            reset_game()

    # Draw everything
    SCREEN.fill((0, 0, 0))
    draw_bird()
    draw_pipes()
    show_score()

    pygame.display.update()
    clock.tick(60)
