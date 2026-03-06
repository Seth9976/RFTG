// 函数名称: sub_680010
// 虚拟地址: 0x680010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_680010(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t eax = esi[0x64]
    int32_t ebx
    ebx.b = eax == 0
    void* edi = esi[0x6f]
    int32_t ecx = 0
    int32_t var_c = ebx
    bool cond:0
    
    if (ebx == 0)
        int32_t edx_1 = esi[0x65]
        
        if (eax s> edx_1 || edx_1 s>= 0x40)
            ecx = 1
        
        cond:0 = esi[0x52] == 1
    else
        cond:0 = esi[0x65] == 0
    
    if (not(cond:0))
        ecx = 1
    
    int32_t eax_1 = esi[0x66]
    
    if (eax_1 != 0 && esi[0x67] != eax_1 - 1)
        ecx = 1
    
    if (esi[0x67] s> 0xd || ecx != 0)
        *(*esi + 0x14) = 0x10
        *(*esi + 0x18) = esi[0x64]
        *(*esi + 0x1c) = esi[0x65]
        *(*esi + 0x20) = esi[0x66]
        *(*esi + 0x24) = esi[0x67]
        (**esi)(esi)
    
    arg1 = nullptr
    
    if (esi[0x52] s> 0)
        void* var_8_1 = &esi[0x53]
        void* i
        
        do
            int32_t ecx_6 = *(*var_8_1 + 4)
            int32_t* ebx_3 = (ecx_6 << 8) + esi[0x28]
            int32_t var_10_1 = ecx_6
            
            if (var_c == 0 && *ebx_3 s< 0)
                *(*esi + 0x14) = 0x73
                *(*esi + 0x18) = ecx_6
                *(*esi + 0x1c) = 0
                (*(*esi + 4))(esi, 0xffffffff)
                ecx_6 = var_10_1
            
            for (int32_t j = esi[0x64]; j s<= esi[0x65]; j += 1)
                int32_t eax_10 = ebx_3[j]
                int32_t edx_8
                edx_8.b = eax_10 s< 0
                
                if (esi[0x66] != (eax_10 & (edx_8 - 1)))
                    *(*esi + 0x14) = 0x73
                    *(*esi + 0x18) = ecx_6
                    *(*esi + 0x1c) = j
                    (*(*esi + 4))(esi, 0xffffffff)
                    ecx_6 = var_10_1
                
                ebx_3[j] = esi[0x67]
            
            var_8_1 += 4
            i = arg1 + 1
            arg1 = i
        while (i s< esi[0x52])
        ebx = var_c
    
    if (esi[0x66] != 0)
        if (ebx == 0)
            *(edi + 4) = sub_67fb30
        else
            *(edi + 4) = sub_67fa50
    else if (ebx == 0)
        *(edi + 4) = sub_67f820
    else
        *(edi + 4) = sub_67f5d0
    
    arg1 = nullptr
    
    if (esi[0x52] s> 0)
        void* var_10_2 = edi + 0x18
        void* var_8_2 = &esi[0x53]
        void* i_1
        
        do
            void* eax_17 = *var_8_2
            
            if (ebx == 0)
                int32_t eax_19 = *(eax_17 + 0x18)
                sub_67e9d0(esi, 0, eax_19, edi + (eax_19 << 2) + 0x2c)
                ebx = var_c
                *(edi + 0x3c) = *(edi + (eax_19 << 2) + 0x2c)
            else if (esi[0x66] == 0)
                int32_t eax_18 = *(eax_17 + 0x14)
                sub_67e9d0(esi, 1, eax_18, edi + (eax_18 << 2) + 0x2c)
            
            var_8_2 += 4
            *var_10_2 = 0
            i_1 = arg1 + 1
            arg1 = i_1
            var_10_2 += 4
        while (i_1 s< esi[0x52])
    
    *(edi + 0x10) = 0
    *(edi + 0xc) = 0
    *(edi + 8) = 0
    *(edi + 0x14) = 0
    int32_t result = esi[0x45]
    *(edi + 0x28) = result
    return result
}
