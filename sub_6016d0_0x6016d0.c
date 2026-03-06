// 函数名称: sub_6016d0
// 虚拟地址: 0x6016d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6016d0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* result = *(arg1 + 0x274)
    void* result = *(arg1 + 0x274)
    
    if (arg2 == 0)
        char const* const var_8 = "rect"
        sub_5cce60("Parameter '%s' is invalid")
        return 0xffffffff
    
    *(result + 0x14bc) = *arg2
    *(result + 0x14c0) = arg2[1]
    *(result + 0x14c4) = arg2[2]
    *(result + 0x14c8) = arg2[3]
    return result
}
