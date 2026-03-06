// 函数名称: sub_439a50
// 虚拟地址: 0x439a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_439a50()
{
    // 第一条实际指令: int128_t* result = *(data_27e7a40 + 0x548)
    int128_t* result = *(data_27e7a40 + 0x548)
    
    if (*(result + 0x2c024) != 0)
        int32_t* esi_1 = result + 0xc024
        
        do
            int32_t result_1 = sub_439050(esi_1)
            result = result_1
            
            if (result_1 != 0)
                int128_t* result_2 = result
                result -= 1
                
                if (result_2 == 1)
                    break
                
                if (result != 1)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x3644, 
                        "UIActionsUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                result = sub_437ca0()
        while (*(*(data_27e7a40 + 0x548) + 0x2c024) != 0)
    
    return result
}
