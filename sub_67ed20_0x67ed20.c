// 函数名称: sub_67ed20
// 虚拟地址: 0x67ed20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67ed20(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    int32_t* ebx = eax[4]
    char* esi = *eax
    int32_t edi = eax[1]
    
    if (ebx[0x68] != 0)
    label_67edcf:
        
        if (arg4 s> arg3)
            if (*(ebx[0x6f] + 8) == 0)
                *(*ebx + 0x14) = 0x75
                (*(*ebx + 4))(ebx, 0xffffffff)
                *(ebx[0x6f] + 8) = 1
            
            char ecx_7 = 0x19 - arg3.b
            arg3 = 0x19
            arg2 <<= ecx_7
        label_67ee15:
            eax = arg1
    else if (arg3 s< 0x19)
        while (true)
            if (edi == 0)
                if ((*(ebx[6] + 0xc))(ebx) == 0)
                    return 0
                
                int32_t* eax_3 = ebx[6]
                esi = *eax_3
                edi = eax_3[1]
            
            uint32_t eax_7 = zx.d(*esi)
            edi -= 1
            esi = &esi[1]
            
            if (eax_7 == 0xff)
                uint32_t i
                
                do
                    if (edi == 0)
                        if ((*(ebx[6] + 0xc))(ebx) == 0)
                            return 0
                        
                        char** eax_6 = ebx[6]
                        esi = *eax_6
                        edi = eax_6[1]
                    
                    i = zx.d(*esi)
                    edi -= 1
                    esi = &esi[1]
                while (i == 0xff)
                
                if (i != 0)
                    ebx[0x68] = i
                    eax = arg1
                    break
                
                eax_7 = 0xff
            
            int32_t eax_9 = arg3 + 8
            arg2 = arg2 << 8 | eax_7
            arg3 = eax_9
            
            if (eax_9 s>= 0x19)
                goto label_67ee15
        
        goto label_67edcf
    
    eax[1] = edi
    *eax = esi
    eax[2] = arg2
    eax[3] = arg3
    return 1
}
