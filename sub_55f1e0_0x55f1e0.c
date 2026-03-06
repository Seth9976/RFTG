// 函数名称: sub_55f1e0
// 虚拟地址: 0x55f1e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_55f1e0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        arg1 = 1
    
    if (arg2 != 1)
        if (arg2 != 2)
            if (arg2 == 3)
                return arg2 + 0x52
        else if (arg3 == 1)
            if (arg1 == arg3)
                return 0x10
            
            if (arg1 == 2)
                return 0x11
        else if (arg3 == 2)
            if (arg1 == 1)
                return 0x14
            
            if (arg1 == 2)
                return 0x15
        
        sub_4c5680("unknown dx11 filter type")
    else if (arg3 != arg2)
        if (arg3 == 2)
            if (arg1 == 1)
                return 4
            
            if (arg1 == 2)
                return 5
        
        sub_4c5680("unknown dx11 filter type")
    else if (arg1 != arg2)
        if (arg1 == 2)
            return arg2
        
        sub_4c5680("unknown dx11 filter type")
    
    return 0
}
