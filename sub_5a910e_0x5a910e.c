// 函数名称: sub_5a910e
// 虚拟地址: 0x5a910e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a910e(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[3]
    int32_t eax = arg1[3]
    int32_t result = 0
    
    if ((eax.b & 3) == 2 && (eax & 0x108) != 0)
        char* eax_1 = arg1[2]
        int32_t edi
        int32_t var_10_1 = edi
        uint32_t edi_2 = *arg1 - eax_1
        
        if (edi_2 s> 0)
            if (sub_5b03d0(__fileno(arg1), eax_1, edi_2) != edi_2)
                arg1[3] |= 0x20
                result = 0xffffffff
            else
                int32_t eax_4 = arg1[3]
                
                if (eax_4.b s< 0)
                    arg1[3] = eax_4 & 0xfffffffd
    
    int32_t eax_6 = arg1[2]
    arg1[1] = 0
    *arg1 = eax_6
    return result
}
