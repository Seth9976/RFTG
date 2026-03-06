// 函数名称: __invalid_parameter
// 虚拟地址: 0x5ad373
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__invalid_parameter(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax = DecodePointer(data_bec940)
    int32_t eax = DecodePointer(data_bec940)
    
    if (eax != 0)
        jump(eax)
    
    int32_t var_8_1 = arg5
    int32_t var_c = arg4
    int32_t var_10 = arg3
    int32_t var_14 = arg2
    int32_t var_18 = arg1
    sub_5ad34e()
    noreturn
}
