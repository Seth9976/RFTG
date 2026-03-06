// 函数名称: sub_42f6a0
// 虚拟地址: 0x42f6a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_42f6a0(int32_t* arg1 @ edi)
{
    // 第一条实际指令: int32_t* eax = *(data_27e7a40 + 0x548)
    int32_t* eax = *(data_27e7a40 + 0x548)
    int32_t esi = eax[0x2feb]
    
    if (esi != 0)
        if (arg1[0x2b] == esi)
            eax.b = 0
            return eax
        
        if (*arg1 == 0)
            eax = sub_463f60(&eax[0x10e58], esi)
            
            if (*eax == 6)
                int32_t ecx_2 = arg1[0x1f]
                
                if (ecx_2 == eax[0x23] || ecx_2 == eax[0x24])
                    eax.b = 0
                    return eax
    
    int32_t eax_2
    eax_2.b = sub_446520(arg1) == 6
    return eax_2
}
