from dataclasses import dataclass


@dataclass
class Path:
    _path: str

    def __init__(self, path: str):
        self._path = path

    @property
    def path(self) -> str:
        return self._path
