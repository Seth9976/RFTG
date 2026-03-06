// 函数名称: sub_5bf220
// 虚拟地址: 0x5bf220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bf220(int32_t* arg1, int32_t* arg2, char arg3, int32_t* arg4)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        if (arg2 != 0)
            *arg2 = arg1
        
        return 0x6b2855
    
    int32_t ebx
    ebx.b = arg3
    
    if ((ebx.b & 0x40) == 0)
        if (arg1[2] == 0)
            sub_5c3620(arg1, 0)
        
        if (ebx.b s< 0)
            int32_t eax_3 = arg1[2]
            
            if ((eax_3 != 1 && eax_3 != 2) || arg1[2] == 4)
            label_5bf271:
                
                if (arg1[3] == 0)
                    int32_t result = sub_5c37c0(*arg1, zx.d(arg1[1].w), &arg1[4], arg4)
                    arg1[3] = result
                    
                    if (result == 0)
                        return result
                
                if (arg2 != 0)
                    *arg2 = arg1[4]
                
                return arg1[3]
        else if (arg1[2] == 4)
            goto label_5bf271
    
    if (arg2 != 0)
        *arg2 = zx.d(arg1[1].w)
    
    return *arg1
}
