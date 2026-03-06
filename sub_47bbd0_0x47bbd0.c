// 函数名称: sub_47bbd0
// 虚拟地址: 0x47bbd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_47bbd0(int32_t arg1, void* arg2, int32_t arg3 @ edi)
{
    // 第一条实际指令: void* edx = arg2 + 8
    void* edx = arg2 + 8
    void* const esi = &data_87423c
    
    while (true)
        int32_t eax_1 = *esi
        *(edx - 8) = eax_1
        *(edx - 4) = arg3
        
        if (eax_1 s< 0x1d)
            break
        
        int32_t eax_3 = (eax_1 - 0x1d) * 0x32c
        int32_t entry_ebx
        
        if (arg3 != 0)
            *edx = eax_3 + entry_ebx + 0x723c
            
            if (eax_1 - 0x1d u> 6)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0xa52, "ClickStateAllocHand")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (eax_1)
                case 0x1d
                    *(eax_3 + entry_ebx + 0x723c) = "rh oc touch a"
                case 0x1e
                    *(eax_3 + entry_ebx + 0x723c) = "rh oc touch b"
                case 0x1f
                    *(eax_3 + entry_ebx + 0x723c) = "rh oc touch trigger"
                case 0x20
                    *(eax_3 + entry_ebx + 0x723c) = "rh vive trigger"
                case 0x21
                    *(eax_3 + entry_ebx + 0x723c) = "rh vive grip"
                case 0x22
                    *(eax_3 + entry_ebx + 0x723c) = "rh vive trackpad"
                case 0x23
                    *(eax_3 + entry_ebx + 0x723c) = "rh vive menu"
        else
            *edx = eax_3 + entry_ebx + 0x5c08
            
            if (eax_1 - 0x1d u> 6)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0xa44, "ClickStateAllocHand")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (eax_1)
                case 0x1d
                    *(eax_3 + entry_ebx + 0x5c08) = "lh oc touch a"
                case 0x1e
                    *(eax_3 + entry_ebx + 0x5c08) = "lh oc touch b"
                case 0x1f
                    *(eax_3 + entry_ebx + 0x5c08) = "lh oc touch trigger"
                case 0x20
                    *(eax_3 + entry_ebx + 0x5c08) = "lh vive trigger"
                case 0x21
                    *(eax_3 + entry_ebx + 0x5c08) = "lh vive grip"
                case 0x22
                    *(eax_3 + entry_ebx + 0x5c08) = "lh vive trackpad"
                case 0x23
                    *(eax_3 + entry_ebx + 0x5c08) = "lh vive menu"
        esi += 4
        edx += 0xc
        
        if (esi s>= 0x874258)
            return 7
    
    sub_4c5870("ButtonSourceIsHanded(source)", &data_83f3d3, "..\code\RftGVR.cpp", 0xa34, 
        "ClickStateAllocHand")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
