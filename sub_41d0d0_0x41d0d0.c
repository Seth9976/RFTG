// 函数名称: sub_41d0d0
// 虚拟地址: 0x41d0d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_41d0d0()
{
    // 第一条实际指令: void* eax_1 = sub_46b2b0(*(data_27e7a40 + 0x74))
    void* eax_1 = sub_46b2b0(*(data_27e7a40 + 0x74))
    void* result
    
    if (sub_41d070() == *(*(data_27e7a40 + 0x548) + 0xbfa8))
        if (*(sub_418a10() + 0x1ec0) == 0xff)
            result = *(*(data_27e7a40 + 0x548) + 0x2c0a4)
            
            if (result u> 0xc)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xaaa, "RolesActive")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (result)
                case 1, 2, 3, 4, 5, 0xc
                    result.b = 1
                    return result
        else if (*(eax_1 + 8) != 0)
            result.b = *(eax_1 + 0x1c) == 4
            return result
    
    result.b = 0
    return result
}
