// 函数名称: sub_67c0b0
// 虚拟地址: 0x67c0b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67c0b0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: void* edi = arg1[1]
    void* edi = arg1[1]
    
    if (arg2 != 1)
        *(*arg1 + 0x14) = 0xe
        *(*arg1 + 0x18) = arg2
        (**arg1)(arg1)
    
    void* result = sub_67bcc0(arg1, arg2, 0x80)
    *(result + 4) = arg5
    *(result + 8) = arg4
    *result = 0
    *(result + 0xc) = arg6
    *(result + 0x20) = arg3
    *(result + 0x28) = 0
    *(result + 0x2c) = *(edi + 0x48)
    *(edi + 0x48) = result
    return result
}
