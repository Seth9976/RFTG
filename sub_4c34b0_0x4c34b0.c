// 函数名称: sub_4c34b0
// 虚拟地址: 0x4c34b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4c34b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = *arg1
    int32_t edx = *arg1
    
    if ((edx != 2 || arg1[1] != 0x20) && (edx != 0x10 || arg1[1] != 0x100000))
        if (edx != 0x14)
        label_4c34e6:
            
            if (edx != 0x12)
            label_4c34f8:
                
                if ((edx != 0x16 || arg1[1] != 1) && (edx != 0xb || arg1[1] != 0x1000)
                        && (edx != 0xe || arg1[1] != 0x10))
                    arg1.b = edx == 4
                    return arg1
            else
                int32_t ecx_2 = arg1[1]
                
                if (ecx_2 != 1 && ecx_2 != 0x10)
                    goto label_4c34f8
        else
            int32_t ecx_1 = arg1[1]
            
            if (ecx_1 != 0x1000 && ecx_1 != 0x100)
                goto label_4c34e6
    
    arg1.b = 1
    return arg1
}
