// 函数名称: sub_4779e0
// 虚拟地址: 0x4779e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4779e0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: sub_47b4a0(&data_30d6f0c, arg1)
    sub_47b4a0(&data_30d6f0c, arg1)
    int32_t ecx = arg1[1]
    void* result
    
    if (ecx == 0x1b && *arg1 == 0)
        result.b = 1
        return result
    
    if (*arg1 == 1 && ecx == 0x43)
        char eax = (arg1[2]).b
        
        if ((2 & eax) != 0 && (eax & 1) != 0)
            sub_508560()
        else if (ecx == 0x43 && (arg1[2].b & 2) != 0)
            sub_508790()
    
    if (*(data_27e7fcc + 0x40) != 0)
        if (*arg1 == 1)
            if (arg1[1] == 0x5a && (arg1[2].b & 2) != 0)
                sub_4075c0()
                sub_463700()
                sub_407670()
            
            if (*arg1 == 1)
                if (arg1[1] == 0x59 && (arg1[2].b & 2) != 0)
                    sub_4075c0()
                    sub_4636a0()
                    sub_407670()
                
                if (*arg1 == 1)
                    if (arg1[1] == 0x53 && (arg1[2].b & 4) != 0)
                        sub_4075c0()
                        data_30d6f38 = data_307c794
                        data_30d6f41 = 1
                        sub_407670()
                    
                    if (*arg1 == 1 && arg1[1] == 0x47 && (arg1[2].b & 2) != 0)
                        data_30929a0 = data_30929a0 == 0
        
        if (*arg1 == 0)
            result = arg1[1]
            
            if (result == 0x62 && arg1[2] == 0)
                result.b = data_27c05f2 == 0
                data_27c05f2 = result.b
                result.b = 1
                return result
            
            if (result == 0x6c && arg1[2] == 0)
                data_be1e94 = 1
                result.b = 1
                return result
    
    result.b = 0
    return result
}
