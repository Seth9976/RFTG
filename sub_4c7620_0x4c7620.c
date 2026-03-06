// 函数名称: sub_4c7620
// 虚拟地址: 0x4c7620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4c7620(uint32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ edi, int32_t arg5, void* arg6, int32_t** arg7)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        return 
    
    void* edx = data_27e7bb8
    arg1 = zx.d(arg3.w)
    
    if (arg1 u>= *(edx + 4))
        return 
    
    arg1 = arg1 * 0x4c + *edx
    
    if (*(arg1 + 0x48) != arg3)
        return 
    
    int32_t var_c_1 = arg5
    void* var_c_2 = arg6
    int32_t var_10_1 = arg1 + 0x3c
    int32_t** var_14_1 = arg7
    int32_t var_18_1 = arg1 + 0x3c
    void* entry_ebx
    sub_4c72b0(arg4, arg7, sub_4c72b0(entry_ebx, sub_4c7510(arg5, entry_ebx + arg4, arg1 + 0x3c), arg6))
}
