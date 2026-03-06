// 函数名称: sub_5a97a7
// 虚拟地址: 0x5a97a7
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a97a7(void* arg1, void* arg2, enum SET_FILE_POINTER_MOVE_METHOD arg3)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0xc)
    int32_t eax = *(arg1 + 0xc)
    
    if ((eax.b & 0x83) == 0)
        *__errno() = 0x16
        return 0xffffffff
    
    *(arg1 + 0xc) = eax & 0xffffffef
    
    if (arg3 == FILE_CURRENT)
        arg2 += sub_5a98ad(arg1)
        arg3 = FILE_BEGIN
    
    sub_5a910e(arg1)
    int32_t eax_5 = *(arg1 + 0xc)
    
    if (eax_5.b s< 0)
        *(arg1 + 0xc) = eax_5 & 0xfffffffc
    else if ((eax_5.b & 1) != 0 && (eax_5.b & 8) != 0 && (eax_5 & 0x400) == 0)
        *(arg1 + 0x18) = 0x200
    
    int32_t ecx_4
    ecx_4.b = sub_5b3cfb(__fileno(arg1), arg2, arg3) != 0xffffffff
    return ecx_4 - 1
}
