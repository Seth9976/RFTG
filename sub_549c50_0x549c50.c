// 函数名称: sub_549c50
// 虚拟地址: 0x549c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_549c50(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = arg2
    int32_t edi = arg2
    data_3079db4(*(arg1 + (edi << 2) + 0x4264), 0x8e28)
    int32_t edx = *(arg1 + (edi << 2) + 0x4264)
    arg2 = 0
    return data_3079468(edx, 0x8867, &arg2)
}
