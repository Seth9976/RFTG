// 函数名称: sub_5cac20
// 虚拟地址: 0x5cac20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cac20(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t** esi = sub_5c99c0(edi, "_SDL_WindowTextureData")
    
    if (esi == 0)
        int32_t* edi_1 = nullptr
        char* ebx_1 = sub_5cec90("SDL_FRAMEBUFFER_ACCELERATION")
        int32_t* ebx_2
        char* var_ac
        
        if (ebx_1 == 0)
        label_5cacc3:
            int32_t esi_1 = 0
            ebx_2 = arg1
            
            while (true)
                sub_5d8e70(esi_1, &var_ac)
                
                if (sub_5cd590(var_ac, "software") != 0)
                    edi_1 = sub_5da400(ebx_2, esi_1, 0)
                    
                    if (edi_1 != 0)
                        break
                
                esi_1 += 1
                
                if (esi_1 s>= 3)
                    if (edi_1 != 0)
                        break
                    
                    sub_5cce60("No hardware accelerated renderers available")
                    return 0xffffffff
        else
            char* eax_1
            eax_1.b = *ebx_1
            
            if (eax_1.b == 0x30 || eax_1.b == 0x31)
                goto label_5cacc3
            
            char const* const var_bc_1 = "software"
            char* var_c0_1 = ebx_1
            
            if (sub_5cd5e0() == 0)
                goto label_5cacc3
            
            while (true)
                sub_5d8e70(esi, &var_ac)
                char* var_c4_1 = ebx_1
                char* var_c8_1 = var_ac
                
                if (sub_5cd5e0() == 0)
                    break
                
                esi += 1
                
                if (esi s>= 3)
                    goto label_5cacc3
            
            ebx_2 = arg1
            edi_1 = sub_5da400(ebx_2, esi, 0)
            
            if (edi_1 == 0)
                goto label_5cacc3
        int32_t var_bc_4 = 0x14
        int32_t var_c0_6 = 1
        esi = sub_5d0ad0()
        
        if (esi == 0)
            sub_5da5d0(edi_1)
            sub_5cd050(esi)
            return 0xffffffff
        
        sub_5c98a0(ebx_2, "_SDL_WindowTextureData", esi)
        *esi = edi_1
        edi = arg1
    
    int32_t* eax_9 = esi[1]
    
    if (eax_9 != 0)
        sub_5d9870(eax_9)
        esi[1] = 0
    
    int32_t var_bc_8 = esi[2]
    sub_5d0af0()
    int32_t* eax_10 = *esi
    esi[2] = 0
    void var_58
    
    if (sub_5d8ee0(eax_10, &var_58) s>= 0)
        int32_t var_4c[0x12]
        *arg2 = var_4c[0]
        int32_t ecx_4 = 0
        int32_t var_50
        
        if (var_50 u> 0)
            do
                int32_t eax_13 = var_4c[ecx_4]
                
                if (eax_13 == 0)
                label_5cade2:
                    int32_t eax_15 = eax_13 u>> 0x14 & 0xf
                    
                    if (eax_15 != 3 && eax_15 != 4 && eax_15 != 7 && eax_15 != 8)
                        *arg2 = var_4c[ecx_4]
                        break
                else if ((eax_13 & 0xf0000000) == 0x10000000)
                    if (eax_13 == 0 || (eax_13 & 0xf0000000) == 0x10000000)
                        goto label_5cade2
                    
                    *arg2 = var_4c[ecx_4]
                    break
                
                ecx_4 += 1
            while (ecx_4 u< var_50)
        
        int32_t* eax_18 = sub_5d99b0(*esi, *arg2, 1, edi[6], edi[7])
        esi[1] = eax_18
        
        if (eax_18 != 0)
            int32_t eax_19 = *arg2
            uint32_t ecx_7
            
            if (eax_19 == 0 || (eax_19 & 0xf0000000) == 0x10000000)
                ecx_7 = zx.d(eax_19.b)
            else if (eax_19 == 0x32595559 || eax_19 == 0x59565955 || eax_19 == 0x55595659)
                ecx_7 = 2
            else
                ecx_7 = 1
            
            esi[4] = ecx_7
            int32_t eax_23 = (edi[6] * ecx_7 + 3) & 0xfffffffc
            esi[3] = eax_23
            int32_t var_bc_10 = edi[7] * eax_23
            int32_t eax_24 = sub_5d0ac0()
            esi[2] = eax_24
            
            if (eax_24 == 0)
                sub_5cd050(0)
                return 0xffffffff
            
            *arg3 = eax_24
            *arg4 = esi[3]
            sub_5d9f50(*esi, nullptr)
            return 0
    
    return 0xffffffff
}
