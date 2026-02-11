# Replit Agent Guide

## Overview

This is a new project repository that has not yet been initialized with any code or framework. The agent should set up the project structure based on the requirements provided by the user, following modern best practices for whatever stack is chosen.

## User Preferences

Preferred communication style: Simple, everyday language.

## System Architecture

No architectural decisions have been made yet. When building out the project, follow these general principles:

- **Start simple** - Choose the simplest architecture that meets the requirements. Don't over-engineer.
- **Monorepo by default** - Keep frontend and backend in the same repository unless there's a clear reason to separate them.
- **Convention over configuration** - Use framework defaults and conventions wherever possible.
- **Environment variables** - Store all secrets and configuration in environment variables, never hardcode them.

When setting up a new project:
1. Choose an appropriate framework based on the user's requirements
2. Set up a clear directory structure with separation of concerns
3. Include proper error handling from the start
4. Set up any necessary build/dev tooling

## External Dependencies

No external dependencies or integrations have been configured yet. When adding dependencies:

- Prefer well-maintained, widely-used packages
- Keep the dependency count minimal — only add what's truly needed
- Pin dependency versions where possible for reproducibility
- Document any required API keys or external service accounts as environment variables