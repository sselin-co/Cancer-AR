from unittest import TestCase

from utils.path import Path


class TestCheckedPath(TestCase):

    def test_athing(self):
        p: Path = Path("hello")
        self.assertEqual(p.path, "hello")
