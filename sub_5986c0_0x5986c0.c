// 函数名称: sub_5986c0
// 虚拟地址: 0x5986c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5986c0(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: char* edx = nullptr
    char* edx = nullptr
    
    if (arg3 s> 0)
        char* edi_1 = arg1
        
        do
            int32_t ecx_1 = 0
            
            if (arg4 s> 0)
                do
                    edi_1[ecx_1] = edx[arg2]
                    ecx_1 += 1
                while (ecx_1 s< arg4)
            
            edx = &edx[1]
            edi_1 = &edi_1[arg4]
        while (edx s< arg3)
    
    return arg1
}
