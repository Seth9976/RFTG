// 函数名称: sub_532c30
// 虚拟地址: 0x532c30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_532c30(int32_t* arg1, float* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    void* i = sub_5329a0(ecx, *arg1)
    int32_t ecx_1 = 0.d
    void* i_1 = i
    int32_t* var_c = arg1
    char var_8 = ecx_1.b
    
    if (i != 0)
        void* esi_1 = data_27e7fcc
        
        do
            int32_t eax = *i_1
            
            if (eax == 1)
                int32_t ecx_2 = *(i_1 + 4)
                
                if (esi_1 == 0)
                    sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, 
                        "GetGameData")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* edx_3 = *(esi_1 + 0x30)
                
                if (ecx_2 != 0)
                    uint32_t eax_4 = zx.d(ecx_2.w)
                    
                    if (eax_4 u< *(edx_3 + 4) && *(eax_4 * 0x7c + *edx_3 + 0x78) == ecx_2)
                        sub_4f2850(arg2)
                        esi_1 = data_27e7fcc
            else
                if (eax != 2)
                    sub_4c5870("Halt", &data_83f3d3, "Attachment.cpp", 0x179, "AttachmentDrawOne")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* eax_3 = sub_4e7b40(ecx_1, *(i_1 + 8))
                
                if (eax_3 != 0)
                    sub_4e8530(eax_3, nullptr, arg2)
                
                esi_1 = data_27e7fcc
            
            if (var_8 == 0)
                var_c = i_1 + 0xc
            else
                var_8 = 0
            
            ecx_1 = *var_c
            
            if (esi_1 == 0)
                sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* edx_5 = *(esi_1 + 0x34)
            
            if (ecx_1 != 0)
                uint32_t eax_7 = zx.d(ecx_1.w)
                
                if (eax_7 u< *(edx_5 + 4))
                    void* eax_9 = eax_7 * 0x34 + *edx_5
                    int32_t edx_6
                    edx_6.b = *(eax_9 + 0x30) != ecx_1
                    i = eax_9 & (edx_6 - 1)
                else
                    i = nullptr
            else
                i = nullptr
            
            i_1 = i
        while (i != 0)
    
    return i
}
