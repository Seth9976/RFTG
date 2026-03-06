// 函数名称: sub_5a6ad4
// 虚拟地址: 0x5a6ad4
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a6ad4(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi
    int32_t var_14 = edi
    int32_t eax = DecodePointer(data_316800c)
    int32_t* esi = DecodePointer(data_3168008)
    
    if (esi u>= eax)
        void* edi_2 = esi - eax
        
        if (edi_2 + 4 u>= 4)
            uint32_t eax_3 = _msize_base(eax)
            
            if (eax_3 u>= edi_2 + 4)
                goto label_5a6b71
            
            uint32_t eax_5 = 0x800
            
            if (eax_3 u< 0x800)
                eax_5 = eax_3
            
            uint32_t eax_6 = eax_5 + eax_3
            int32_t eax_7
            
            if (eax_6 u>= eax_3)
                eax_7 = __realloc_crt(eax, eax_6)
            
            if (eax_6 u>= eax_3 && eax_7 != 0)
            label_5a6b58:
                esi = eax_7 + (edi_2 s>> 2 << 2)
                data_316800c = EncodePointer(eax_7)
            label_5a6b71:
                *esi = EncodePointer(arg1)
                data_3168008 = EncodePointer(&esi[1])
                return arg1
            
            if (eax_3 + 0x10 u>= eax_3)
                eax_7 = __realloc_crt(eax, eax_3 + 0x10)
                
                if (eax_7 != 0)
                    goto label_5a6b58
    
    return 0
}
