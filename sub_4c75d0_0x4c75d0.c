// 函数名称: sub_4c75d0
// 虚拟地址: 0x4c75d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4c75d0(uint32_t arg1, int32_t arg2, int32_t arg3, int32_t** arg4 @ edi, int32_t arg5, void* arg6)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    
    if (arg3 == 0)
        return 
    
    void* edx = data_27e7bb8
    arg1 = zx.d(arg3.w)
    
    if (arg1 u>= *(edx + 4))
        return 
    
    arg1 = arg1 * 0x4c + *edx
    
    if (*(arg1 + 0x48) != arg3)
        return 
    
    int32_t var_10_1 = arg5
    void* var_10_2 = arg6
    int32_t var_14_1 = arg1 + 0x3c
    sub_4c72b0(arg4, sub_4c7510(arg5, arg4, arg1 + 0x3c), arg6)
}
