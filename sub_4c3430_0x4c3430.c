// 函数名称: sub_4c3430
// 虚拟地址: 0x4c3430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4c3430(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = *arg1
    int32_t edx = *arg1
    
    if (edx != 1 || arg1[1] != 0x20)
        if (edx != 0x15)
        label_4c3458:
            
            if (edx != 0x13)
            label_4c346a:
                
                if ((edx != 0x17 || arg1[1] != 1) && (edx != 0x11 || arg1[1] != 0x100000)
                        && (edx != 0xc || arg1[1] != 0x1000) && (edx != 0xd || arg1[1] != 0x10))
                    arg1.b = edx == 3
                    return arg1
            else
                int32_t ecx_2 = arg1[1]
                
                if (ecx_2 != 1 && ecx_2 != 0x10)
                    goto label_4c346a
        else
            int32_t ecx_1 = arg1[1]
            
            if (ecx_1 != 0x1000 && ecx_1 != 0x100)
                goto label_4c3458
    
    arg1.b = 1
    return arg1
}
