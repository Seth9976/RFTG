// 函数名称: sub_6713f0
// 虚拟地址: 0x6713f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_6713f0(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0xfc) += 1
    *(arg1 + 0xfc) += 1
    uint32_t result = *(arg1 + 0xfc)
    
    if (result u>= *(arg1 + 0xec))
        int32_t ebx
        int32_t var_c_1 = ebx
        
        if (*(arg1 + 0x138) == 0)
        label_67151b:
            int32_t eax_11
            
            while (true)
                eax_11 = sub_6746d0(arg1 + 0x78, 4)
                
                if (eax_11 != 0)
                    break
                
                if (*(arg1 + 0x88) == eax_11)
                    sub_66fdb0(arg1, *(arg1 + 0xb0), *(arg1 + 0xb4))
                    int32_t eax_13 = *(arg1 + 0xb4)
                    *(arg1 + 0x84) = *(arg1 + 0xb0)
                    *(arg1 + 0x88) = eax_13
            
            if (eax_11 != 1)
                char* eax_14 = *(arg1 + 0x90)
                
                if (eax_14 == 0)
                    sub_664320(arg1, "zlib error")
                    noreturn
                
                sub_664320(arg1, eax_14)
                noreturn
            
            int32_t ecx_6 = *(arg1 + 0x88)
            int32_t eax_15 = *(arg1 + 0xb4)
            
            if (ecx_6 u< eax_15)
                sub_66fdb0(arg1, *(arg1 + 0xb0), eax_15 - ecx_6)
            
            result = sub_66f3a0(arg1)
            *(arg1 + 0xa4) = 0
        else
            bool cond:1_1 = (*(arg1 + 0x74) & 2) == 0
            *(arg1 + 0xfc) = 0
            
            if (cond:1_1)
                while (true)
                    *(arg1 + 0x139) += 1
                    ebx.b = *(arg1 + 0x139)
                    
                    if (ebx.b u>= 7)
                        goto label_67151b
                    
                    uint32_t ecx_1 = zx.d(ebx.b)
                    uint32_t edi_1 = zx.d(*(ecx_1 + 0x8305f8))
                    *(arg1 + 0xf0) =
                        divu.dp.d(0:(*(arg1 + 0xe4) - zx.d(*(ecx_1 + 0x8305f0)) + edi_1 - 1), edi_1)
                    uint32_t edi_2 = zx.d(*(ecx_1 + 0x830608))
                    result =
                        divu.dp.d(0:(*(arg1 + 0xe8) - zx.d(*(ecx_1 + 0x830600)) + edi_2 - 1), edi_2)
                    bool cond:2_1 = *(arg1 + 0xf0) == 0
                    *(arg1 + 0xec) = result
                    
                    if (not(cond:2_1))
                        if (result != 0)
                            break
            else
                *(arg1 + 0x139) += 1
                ebx.b = *(arg1 + 0x139)
            
            if (ebx.b u>= 7)
                goto label_67151b
            
            int128_t* ecx_4 = *(arg1 + 0x104)
            
            if (ecx_4 != 0)
                int32_t eax_6 = zx.d(*(arg1 + 0x140)) * zx.d(*(arg1 + 0x13d))
                
                if (eax_6 s< 8)
                    return sub_5abfc0(ecx_4, 0, ((*(arg1 + 0xe4) * eax_6 + 7) u>> 3) + 1)
                
                return sub_5abfc0(ecx_4, 0, (eax_6 u>> 3) * *(arg1 + 0xe4) + 1)
    
    return result
}
