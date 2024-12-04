from fastapi import FastAPI
from src.api.v1.routers import router as v1_api_router

app = FastAPI()


app.include_router(v1_api_router, prefix="/api/v1")
