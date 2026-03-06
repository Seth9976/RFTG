// 函数名称: sub_5c35a0
// 虚拟地址: 0x5c35a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5c35a0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, void* arg5)
{
    // 第一条实际指令: void* result = sub_5bfc00(arg1, arg2, arg3, arg4, arg5)
    void* result = sub_5bfc00(arg1, arg2, arg3, arg4, arg5)
    
    if (result != 0)
        return sub_5bf220(*(result + 0x30), nullptr, arg4.b, arg5)
    
    return result
}
