// 函数名称: sub_47c4d0
// 虚拟地址: 0x47c4d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_47c4d0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 u> 4)
    if (arg1 u> 4)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0xc56, "ControllerClicked")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* result
    
    switch (arg1)
        case 0
            void* esi_2 = nullptr
            
            while (true)
                int32_t eax_4 = *(esi_2 + 0x84134c)
                int32_t ecx_3
                
                if (eax_4 s>= 0x1d)
                    ecx_3 = arg2 + 0x5c08
                    
                    if (*(arg2 + 8) != 0)
                        ecx_3 = arg2 + 0x723c
                    
                    eax_4 -= 0x1d
                else
                    ecx_3 = arg2 + 0xc
                
                result = eax_4 * 0x32c + ecx_3
                
                if (*(result + 0x327) != 0)
                    break
                
                if (*(result + 0x326) != 0)
                    break
                
                esi_2 += 4
                
                if (esi_2 u>= 0x24)
                    result.b = 0
                    return result
        case 1
            void* esi_3 = nullptr
            
            while (true)
                int32_t eax_6 = *(esi_3 + 0x841370)
                int32_t ecx_4
                
                if (eax_6 s>= 0x1d)
                    ecx_4 = arg2 + 0x5c08
                    
                    if (*(arg2 + 8) != 0)
                        ecx_4 = arg2 + 0x723c
                    
                    eax_6 -= 0x1d
                else
                    ecx_4 = arg2 + 0xc
                
                result = eax_6 * 0x32c + ecx_4
                
                if (*(result + 0x327) != 0)
                    break
                
                if (*(result + 0x326) != 0)
                    break
                
                esi_3 += 4
                
                if (esi_3 u>= 0x1c)
                    result.b = 0
                    return result
        case 2
            void* esi_4 = nullptr
            
            while (true)
                int32_t eax_8 = *(esi_4 + 0x84138c)
                int32_t ecx_5
                
                if (eax_8 s>= 0x1d)
                    ecx_5 = arg2 + 0x5c08
                    
                    if (*(arg2 + 8) != 0)
                        ecx_5 = arg2 + 0x723c
                    
                    eax_8 -= 0x1d
                else
                    ecx_5 = arg2 + 0xc
                
                result = eax_8 * 0x32c + ecx_5
                
                if (*(result + 0x327) != 0)
                    break
                
                if (*(result + 0x326) != 0)
                    break
                
                esi_4 += 4
                
                if (esi_4 u>= 0x1c)
                    result.b = 0
                    return result
        case 3
            void* esi_1 = nullptr
            
            while (true)
                int32_t eax_2 = *(esi_1 + 0x84132c)
                int32_t ecx_2
                
                if (eax_2 s>= 0x1d)
                    ecx_2 = arg2 + 0x5c08
                    
                    if (*(arg2 + 8) != 0)
                        ecx_2 = arg2 + 0x723c
                    
                    eax_2 -= 0x1d
                else
                    ecx_2 = arg2 + 0xc
                
                result = eax_2 * 0x32c + ecx_2
                
                if (*(result + 0x327) != 0)
                    break
                
                if (*(result + 0x326) != 0)
                    break
                
                esi_1 += 4
                
                if (esi_1 u>= 0x10)
                    result.b = 0
                    return result
        case 4
            void* esi = nullptr
            
            while (true)
                int32_t eax = *(esi + 0x84133c)
                int32_t ecx_1
                
                if (eax s>= 0x1d)
                    ecx_1 = arg2 + 0x5c08
                    
                    if (*(arg2 + 8) != 0)
                        ecx_1 = arg2 + 0x723c
                    
                    eax -= 0x1d
                else
                    ecx_1 = arg2 + 0xc
                
                result = eax * 0x32c + ecx_1
                
                if (*(result + 0x327) != 0)
                    break
                
                if (*(result + 0x326) != 0)
                    break
                
                esi += 4
                
                if (esi u>= 0x10)
                    result.b = 0
                    return result
    
    result.b = 1
    return result
}
