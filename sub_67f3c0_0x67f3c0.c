// 函数名称: sub_67f3c0
// 虚拟地址: 0x67f3c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_67f3c0(void* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    void* edi = esi[0x6f]
    
    if (esi[0x64] != 0 || esi[0x65] != 0x3f || esi[0x66] != 0 || esi[0x67] != 0)
        *(*esi + 0x14) = 0x7a
        (*(*esi + 4))(esi, 0xffffffff)
    
    void* i_2 = nullptr
    void* i
    
    if (esi[0x52] s> 0)
        void* var_c_1 = edi + 0x14
        arg1 = &esi[0x53]
        
        do
            void* eax_2 = *arg1
            int32_t ecx_3 = *(eax_2 + 0x14)
            int32_t ebx_1 = *(eax_2 + 0x18)
            sub_67e9d0(esi, 1, ecx_3, edi + (ecx_3 << 2) + 0x28)
            sub_67e9d0(esi, 0, ebx_1, edi + (ebx_1 << 2) + 0x38)
            int32_t* ecx_5 = var_c_1
            arg1 += 4
            *ecx_5 = 0
            i = i_2 + 1
            i_2 = i
            var_c_1 = &ecx_5[1]
        while (i s< esi[0x52])
    
    arg1 = nullptr
    
    if (esi[0x59] s> 0)
        i = edi + 0xc0
        void* edx_3 = &esi[0x5a]
        void* i_1
        
        do
            void* ecx_8 = esi[*edx_3 + 0x53]
            *(i - 0x78) = *(edi + (*(ecx_8 + 0x14) << 2) + 0x28)
            *(i - 0x50) = *(edi + (*(ecx_8 + 0x18) << 2) + 0x38)
            
            if (*(ecx_8 + 0x30) == 0)
                *i = 0
                *(i - 0x28) = 0
            else
                *(i - 0x28) = 1
                int32_t ebx_7
                ebx_7.b = *(ecx_8 + 0x24) s> 1
                *i = ebx_7
            
            i_1 = arg1 + 1
            edx_3 += 4
            i += 4
            arg1 = i_1
        while (i_1 s< esi[0x59])
    
    *(edi + 0x10) = 0
    *(edi + 0xc) = 0
    *(edi + 8) = 0
    *(edi + 0x24) = esi[0x45]
}
