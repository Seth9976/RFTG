// 函数名称: sub_48bc70
// 虚拟地址: 0x48bc70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_48bc70(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (esi[6].b == 0)
        char const* const var_1c_1 = "complete_turn() called with real game!\n"
        sub_4c5680("error %s")
        sub_5a79f4()
        noreturn
    
    if (*(esi + 0x1ec3) != 0)
        return 
    
    int32_t j = sx.d(esi[0x116].b)
    char* i = sx.d(*(esi + 0x1ec1)) + 1
    
    if (i s< j)
        void* edi_1 = &esi[i * 0x2d + 0xc]
        void* var_8_1 = edi_1
        
        do
            bool cond:1_1 = esi[0x7b0].b != 7
            *(esi + 0x1ec1) = i.b
            
            if (not(cond:1_1))
                int32_t edx_2 = *(edi_1 - 4) & 0x7f
                
                if (edx_2.b != 7)
                    j = *edi_1 & 0x7f
                
                if (edx_2.b == 7 || j.b == 7)
                    j, edx_2 = sub_4a8940(j, edx_2, i, esi, 0, 1)
                    edi_1 = var_8_1
                
                do
                    j, edx_2 = sub_4ab170(j, edx_2, esi, i)
                while (j != 0)
            
            if (esi[0x7b0].b == 9)
                do
                    j = sub_4acd10(esi, i)
                while (j != 0)
            
            i = &i[1]
            edi_1 += 0xb4
            var_8_1 = edi_1
        while (i s< sx.d(esi[0x116].b))
    
    j.b = esi[0x7b0].b
    
    if (j.b == 5 || j.b == 6)
        sub_4a79a0(esi)
    
    if (esi[0x7b0].b == 9)
        sub_4ad440(esi)
    
    sub_49d660(esi)
    sub_4ae980()
    int32_t ecx_9
    arg1, ecx_9 = sub_49d1f0()
    int32_t ebx_4 = sx.d(esi[0x7b0].b) + 1
    
    if (ebx_4 s<= 9)
        while (arg2 != 1)
            esi[0x7b0].b = ebx_4.b
            
            if (*(ebx_4 + esi + 0x1eb6) != 0 && ebx_4 u<= 9)
                switch (ebx_4)
                    case 0
                        sub_49e870(esi)
                    case 1
                        sub_49e910(esi)
                    case 3, 4
                        sub_4a0580(esi)
                    case 5, 6
                        sub_4a7e00(esi)
                    case 7
                        sub_4ab8f0(esi)
                    case 9
                        sub_4ad800(esi)
            
            ebx_4 += 1
            
            if (ebx_4 s> 9)
                break
    
    esi[0x7b0].b = 0xa
    
    if (arg2 == 0)
        sub_4adac0(esi)
        sub_4ae980()
    
    if (esi[0x781].b s<= 0)
        *(esi + 0x1ec3) = 1
    
    int32_t i_3 = 0
    
    if (esi[0x116].b s> 0)
        void* edx_3 = esi + 0x56
        int32_t i_1
        
        do
            int32_t eax_2 = *esi
            int32_t ebx_6 = 0xc
            
            if (eax_2 != 0)
                int32_t eax_3 = *(eax_2 + 0x14)
                
                if (eax_3 s> 0)
                    ebx_6 = eax_3
            
            int32_t j_1 = sx.d(*edx_3)
            int32_t ecx_17 = 0
            
            if (j_1 != 0xffffffff)
                do
                    int32_t eax_4 = j_1 * 5
                    
                    if ((*(esi[eax_4 + 0x11b] + 0x10) & 0x10000) != 0)
                        ecx_17 += 1
                    
                    j_1 = sx.d(*(&esi[eax_4] + 0x476))
                while (j_1 != 0xffffffff)
                
                if (ecx_17 != 0)
                    ebx_6 = j_1 + 0xf
            
            if (i_3 s< 0)
                goto label_48befe
            
            arg1 = sx.d(*(edx_3 - 0x10))
            int32_t ecx_18 = 0
            
            if (arg1 s< 0xffffffff)
                goto label_48befe
            
            while (arg1 != 0xffffffff)
                arg1 = sx.d(esi[arg1 * 5 + 0x11d].w)
                ecx_18 += 1
            
            if (ecx_18 s>= ebx_6)
                *(esi + 0x1ec3) = 1
            
            if (*(edx_3 + 0x4d) s>= 0xf)
                *(esi + 0x1ec3) = 1
            
            i_1 = i_3 + 1
            edx_3 += 0xb4
            i_3 = i_1
        while (i_1 s< sx.d(esi[0x116].b))
    
    if (*(esi + 0x1ec3) != 0 || arg2 != 0)
        return 
    
    sub_49d290(esi)
    int32_t edx_4 = sx.d(*(esi + 0x19))
    
    if (edx_4 s< 0)
    label_48befe:
        sub_49b2a0()
        noreturn
    
    int32_t i_2 = sx.d(esi[edx_4 * 0x2d + 0x11].w)
    int32_t ecx_21 = 0
    
    if (i_2 s< 0xffffffff)
        sub_49b2a0()
        noreturn
    
    while (i_2 != 0xffffffff)
        i_2 = sx.d(esi[i_2 * 5 + 0x11d].w)
        ecx_21 += 1
    
    arg1 = sx.d(*(&esi[edx_4 * 0x2d] + 0xb5))
    
    if (arg1 s< ecx_21)
        sub_48bc00(esi, edx_4, ecx_21 - arg1)
}
