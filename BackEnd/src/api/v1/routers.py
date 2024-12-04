from fastapi import APIRouter
from .endpoints import program_router

router = APIRouter()

router.include_router(program_router, prefix="/program", tags=["Program"])
