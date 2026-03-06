// 函数名称: sub_52e3e0
// 虚拟地址: 0x52e3e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_52e3e0(void* arg1)
{
    // 第一条实际指令: void* result_1 = nullptr
    void* result_1 = nullptr
    int32_t edi_2 = data_be1edc * 0x19e0 + data_be1ed8
    
    while (true)
        void* result = data_be1ed8
        
        if (result_1 != 0)
            result = result_1 + 0x19e0
        
        if (result u>= edi_2)
            break
        
        while (true)
            if ((*(result + 0x19dc) & 0xffff0000) != 0)
                int32_t edx_1 = *(result + 0x19d0)
                result_1 = result
                int32_t ecx_1 = 0
                
                if (edx_1 s<= 0)
                    break
                
                void* esi = result + 0x15d0
                
                do
                    if (*esi == *(arg1 + 0x19dc))
                        return result
                    
                    ecx_1 += 1
                    esi += 4
                while (ecx_1 s< edx_1)
                
                break
            
            result += 0x19e0
            
            if (result u>= edi_2)
                goto label_52e44a
    
    label_52e44a:
    sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x1611, "UI2FindParent")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
