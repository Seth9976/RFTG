// 函数名称: sub_601f70
// 虚拟地址: 0x601f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_601f70(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 4) + 1
    int32_t result = *(arg1 + 4) + 1
    *(arg1 + 4) = result
    return result
}
