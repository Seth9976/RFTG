// 函数名称: sub_563630
// 虚拟地址: 0x563630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_563630(char* arg1, int128_t** arg2, char** arg3)
{
    // 第一条实际指令: char** var_8 = arg1
    char** var_8 = arg1
    char* arg_c
    char* edi = arg_c
    char* var_14 = arg1
    var_8 = &var_14
    
    if (edi == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4e6800(&var_8, sub_4c42b0(&var_14, edi), arg1, &var_8)
    char** eax_2 = var_8
    
    if (eax_2 == 0)
        eax_2 = &data_83f3d3
    
    var_14 = eax_2
    sub_4e7280(&arg_c, var_14)
    char* eax_3 = arg_c
    
    if (eax_3 != 0)
        eax_3.b = *eax_3
        
        if (eax_3.b != 0)
            char* esi_3 = *(sub_4c4060(&arg_c) + 8)
            int128_t* eax_13 = sub_4cce80(esi_3)
            char* eax_14 = arg_c
            
            if (eax_14 == 0)
                eax_14 = &data_83f3d3
            
            var_14 = esi_3
            sub_5ab990(eax_13, eax_14, var_14)
            *arg3 = esi_3
            *arg2 = eax_13
            char* eax_16 = arg_c
            
            if (eax_16 != 0 && *eax_16 != 0)
                void* eax_18 = sub_4c4060(&arg_c)
                int32_t temp2_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp2_1 == 1)
                    char* esi_5 = *(eax_18 + 0xc) + 0x10
                    int32_t* eax_19 = sub_4f4380(esi_5)
                    var_14 = esi_5
                    sub_4f4430(eax_18, eax_19, var_14)
            
            char** eax_21 = var_8
            
            if (eax_21 != 0 && *eax_21 != 0)
                void* eax_23 = sub_4c4060(&var_8)
                int32_t temp3_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp3_1 == 1)
                    char* esi_7 = *(eax_23 + 0xc) + 0x10
                    int32_t* eax_24 = sub_4f4380(esi_7)
                    var_14 = esi_7
                    sub_4f4430(eax_23, eax_24, var_14)
            
            return 0
    
    char** eax_4 = var_8
    
    if (eax_4 != 0 && *eax_4 != 0)
        void* eax_6 = sub_4c4060(&var_8)
        int32_t temp1_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp1_1 == 1)
            char* esi_2 = *(eax_6 + 0xc) + 0x10
            int32_t* eax_7 = sub_4f4380(esi_2)
            var_14 = esi_2
            sub_4f4430(eax_6, eax_7, var_14)
    
    return 1
}
