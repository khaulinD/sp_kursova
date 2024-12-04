from pathlib import Path

from fastapi import APIRouter
import subprocess

router = APIRouter()
BASE_DIR = Path(__file__).resolve().parents[5]
EXE_PATH = BASE_DIR / "src_program/build_Win32/Debug/sp_kursova.exe"
INPUT_DIR = BASE_DIR / "src_program/build_Win32/Debug/prog1.k21"
@router.get("/")
async def root():
    result = subprocess.run(
        [EXE_PATH, str(INPUT_DIR)],
        capture_output=True,
        text=True,
    )
    return {"message": "Hello World"}