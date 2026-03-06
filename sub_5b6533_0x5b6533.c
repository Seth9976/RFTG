// 函数名称: sub_5b6533
// 虚拟地址: 0x5b6533
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b6533(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_2 = **arg1
    int32_t eax_2 = **arg1
    
    if (eax_2 == 0xe0434352 || eax_2 == 0xe0434f4d)
        if (__getptd()[0x24] s> 0)
            uint32_t* eax_5 = __getptd()
            eax_5[0x24] -= 1
    else if (eax_2 == 0xe06d7363)
        __getptd()[0x24] = 0
        noreturn terminate() __tailcall
    
    return 0
}
