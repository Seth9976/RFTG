// 函数名称: ___onexitinit
// 虚拟地址: 0x5a6b8a
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t___onexitinit()
{
    // 第一条实际指令: int32_t* eax = __calloc_crt(0x20, 4)
    int32_t* eax = __calloc_crt(0x20, 4)
    int32_t eax_1 = EncodePointer(eax)
    data_316800c = eax_1
    data_3168008 = eax_1
    
    if (eax == 0)
        return 0x18
    
    *eax = 0
    return 0
}
