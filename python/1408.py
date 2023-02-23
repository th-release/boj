start = input()
end = input()

start_sec = int(start[:2]) * 3600 + int(start[3:5]) * 60 + int(start[6:])
end_sec = int(end[:2]) * 3600 + int(end[3:5]) * 60 + int(end[6:])

if start_sec > end_sec:
  end_sec += 24 * 3600

diff_sec = end_sec - start_sec

diff_hour = diff_sec // 3600
diff_minute = (diff_sec % 3600) // 60
diff_sec = diff_sec % 60

print('{:02d}:{:02d}:{:02d}'.format(diff_hour, diff_minute, diff_sec))