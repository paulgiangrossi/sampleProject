static int playback(int x);

int side(int x)
{
  if (x > 0) {
    return playback(x);
  } else
    return -1;
}
