// 函数名称: sub_500000
// 虚拟地址: 0x500000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_500000(int32_t* arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: int32_t ecx = *arg1
    int32_t ecx = *arg1
    int32_t var_8 = 0
    
    if (ecx u> 3)
        sub_4c5870("Halt", &data_83f3d3, "xPlatformGeneric.cpp", 0x55, "GenericHalGetFilePath")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (ecx)
        case 0
            char* const eax = arg1[1]
            
            if (eax == 0)
                eax = &data_83f3d3
            
            char* const var_10_1 = eax
            int32_t var_14_1 = sub_4c6050()
            sub_4c4a50(arg2, "%s%s")
            return arg2
        case 1
            char* const eax_3 = arg1[1]
            
            if (eax_3 == 0)
                eax_3 = &data_83f3d3
            
            char* const var_10_2 = eax_3
            char* var_14_2 = &data_30785f8
            sub_4c4a50(arg2, "%s/%s")
            return arg2
        case 2, 3
            char* eax_5 = arg1[1]
            *arg2 = eax_5
            
            if (eax_5 == 0 || *eax_5 == 0)
                return arg2
            
            void* eax_7 = sub_4c4060(arg2)
            *(eax_7 + 4) += 1
            return arg2
}
