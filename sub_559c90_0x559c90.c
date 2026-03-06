// 函数名称: sub_559c90
// 虚拟地址: 0x559c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_559c90()
{
    // 第一条实际指令: void* esi = nullptr
    void* esi = nullptr
    int32_t* ecx_1
    
    while (true)
        ecx_1 = data_3079200
        void* eax_1
        
        if (esi != 0)
            eax_1 = esi + 0x10
        else
            eax_1 = ecx_1[0x21]
        
        int32_t edx_3 = (ecx_1[0x22] << 4) + ecx_1[0x21]
        
        if (eax_1 u>= edx_3)
            break
        
        while (true)
            if ((*(eax_1 + 0xc) & 0xffff0000) != 0)
                int32_t edx_4 = *(eax_1 + 0xc)
                esi = eax_1
                int32_t eax_4 = *(eax_1 + 4)
                
                if (eax_4 == 0)
                    (*(*ecx_1 + 0x2c))(edx_4)
                    break
                
                if (eax_4 == 1)
                    (*(*ecx_1 + 0x38))(edx_4)
                    break
                
                sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x157, 
                    "Dx9GraphicsUnbindAll")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            eax_1 += 0x10
            
            if (eax_1 u>= edx_3)
                goto label_559cda
    
    label_559cda:
    sub_55d490(&ecx_1[0x21])
    sub_50bcc0()
    return sub_54c860()
}
