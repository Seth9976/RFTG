// 函数名称: sub_506300
// 虚拟地址: 0x506300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __stdcallsub_506300(int32_t* arg1 @ eax, char* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_10 = ebx
    char* edi = *arg1
    
    if (edi == 0 || *edi == 0)
        return 
    
    do
        ebx.b = *edi
        
        if (ebx.b u>= 0x80 && (ebx.b & 0xe0) != 0xc0 && (ebx.b & 0xf0) != 0xe0)
            arg1.b = ebx.b
            arg1.b &= 0xf8
            
            if (arg1.b != 0xf0)
                sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                    "c:\ax2010\engine\Xutf8.cpp", 0x209, "Xutf8_peek_next")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        
        char* var_8 = edi
        uint32_t eax = sub_4ba310(&var_8)
        var_8 = edi
        
        if (ebx.b u>= 0x80 && (ebx.b & 0xe0) != 0xc0 && (ebx.b & 0xf0) != 0xe0)
            ebx.b &= 0xf8
            
            if (ebx.b != 0xf0)
                sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                    "c:\ax2010\engine\Xutf8.cpp", 0x20f, "Xutf8_next")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        
        sub_4ba310(&var_8)
        edi = var_8
        sub_505e40(arg2, arg2, eax)
    while (*edi != 0)
}
