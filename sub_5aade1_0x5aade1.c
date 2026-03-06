// 函数名称: sub_5aade1
// 虚拟地址: 0x5aade1
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5aade1(char* arg1, void* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    arg1 = esi
    void var_14
    sub_5a73dd(&var_14, arg4)
    int32_t edx = arg3
    void* var_c
    char var_8
    
    if (esi != 0 || edx == 0)
        void* ecx_1 = arg2
        
        if (ecx_1 != 0 || edx == 0)
            int32_t edi
            int32_t var_20_1 = edi
            void* var_10
            char* result
            
            if (*(var_10 + 8) != 0)
                while (true)
                    if (edx == 0)
                        break
                    
                    char eax_1 = *ecx_1
                    edx -= 1
                    bool cond:0_1 = (*(zx.d(eax_1) + var_10 + 0x1d) & 4) == 0
                    *esi = eax_1
                    
                    if (cond:0_1)
                        esi = &esi[1]
                        ecx_1 += 1
                        
                        if (eax_1 != 0)
                            continue
                    else
                        if (edx == 0)
                            *esi = 0
                            break
                        
                        eax_1 = *(ecx_1 + 1)
                        edx -= 1
                        esi[1] = eax_1
                        esi = &esi[2]
                        ecx_1 += 2
                        
                        if (eax_1 != 0)
                            continue
                        else
                            esi[0xfffffffe] = 0
                    
                    if (edx == 0)
                        break
                    
                    sub_5abfc0(esi, 0, edx)
                    break
                
                if (var_8 != 0)
                    *(var_c + 0x70) &= 0xfffffffd
                
                result = arg1
            else
                result = _strncpy(esi, ecx_1, edx)
                
                if (var_8 != 0)
                    *(var_c + 0x70) &= 0xfffffffd
            
            return result
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return nullptr
}
