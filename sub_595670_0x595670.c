// 函数名称: sub_595670
// 虚拟地址: 0x595670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_595670(int32_t arg1, void* arg2 @ esi)
{
    // 第一条实际指令: *(arg2 + 0x10) = data_8bc528
    *(arg2 + 0x10) = data_8bc528
    *(arg2 + 0x14) = data_8bc52c
    *(arg2 + 0x18) = data_8bc530
    int32_t edx_1 = *(arg2 + 0x10)
    *(arg2 + 0x1c) = arg1
    *(arg2 + 0x24) = 0x80
    *(arg2 + 0x20) = 1
    *(arg2 + 0xb0) = arg2 + 0x28
    int32_t eax = edx_1(arg1, arg2 + 0x28, 0x80)
    
    if (eax != 0)
        *(arg2 + 0xa8) = arg2 + 0x28
        *(arg2 + 0xac) = eax + arg2 + 0x28
        return eax + arg2 + 0x28
    
    *(arg2 + 0x20) = eax
    char* result = *(arg2 + 0xac) - 1
    *(arg2 + 0xa8) = result
    *result = 0
    return result
}
