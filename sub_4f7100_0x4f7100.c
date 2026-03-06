// 函数名称: sub_4f7100
// 虚拟地址: 0x4f7100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4f7100(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    void* edi_1 = sub_4fc3d0(&data_be1cb8, arg1)
    int32_t* eax_2 = sub_4f4890(*(edi_1 + 4))
    int32_t* var_10_1 = eax_2
    int32_t var_18_1 = 0
    
    if (eax_2[1] s> 0)
        int32_t ecx_1 = 0
        void* edi_2 = edi_1 + 0x30
        int32_t var_1c_1 = 0
        void* var_14_1 = edi_2
        
        while (true)
            void* ebx_1 = *eax_2
            int32_t esi_2 = *(ebx_1 + ecx_1 + 8)
            
            if (ecx_1 s>= 0x11800)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_1 = *edi_2
            int128_t* eax_3
            int32_t ecx_2
            
            if (edx_1 != 0)
                eax_3, ecx_2 = sub_4fc1e0(ecx_1, edx_1)
            else
                eax_3 = sub_4fc0d0()
                *(eax_3 + 4) = esi_2
                ecx_2 = *(eax_3 + 0x1bc)
                *edi_2 = ecx_2
            
            int32_t ebx_3 = *(ebx_1 + ecx_1 + 4)
            
            if (ebx_3 == 2)
                void* ebx_9 = eax_3 + 0xa4
                int32_t i_1 = 0x1e
                int32_t i
                
                do
                    sub_4f7100(*ebx_9)
                    ebx_9 += 4
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                edi_2 = var_14_1
            else if (ebx_3 == 7)
                if (sub_4e7b40(ecx_2, *(eax_3 + 0x9c)) != 0)
                    sub_4e7bb0()
            else if (ebx_3 == 8 && sub_4eb5a0(ecx_2, eax_3[0xa].d) != 0)
                sub_4eb650()
            
            sub_4f6620(eax_3)
            int32_t eax_6 = data_be1ca8
            var_1c_1 += 0x118
            data_be1ca8 = zx.d(*(eax_3 + 0x1bc))
            *(eax_3 + 0x1bc) = eax_6
            data_be1cac -= 1
            int32_t eax_8 = var_18_1 + 1
            edi_2 += 4
            var_18_1 = eax_8
            var_14_1 = edi_2
            
            if (eax_8 s>= var_10_1[1])
                break
            
            ecx_1 = var_1c_1
            eax_2 = var_10_1
    
    int32_t eax = data_be1cc4
    data_be1cc4 = zx.d(*(edi_1 + 0x434))
    *(edi_1 + 0x434) = eax
    data_be1cc8 -= 1
}
