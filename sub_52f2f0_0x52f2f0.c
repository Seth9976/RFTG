// 函数名称: sub_52f2f0
// 虚拟地址: 0x52f2f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_52f2f0(char arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = data_315b33c
    int32_t* entry_result
    void var_38
    
    if (eax_2 != 0)
        if (eax_2 != 2)
            sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x172b, "UI2DragSelectionRect")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        data_30d74e8
        int32_t* eax_15 = sub_524d70(&var_38)
        int32_t edx_11 = eax_15[1]
        *entry_result = *eax_15
        int32_t ecx_14 = eax_15[2]
        entry_result[1] = edx_11
        int32_t edx_12 = eax_15[3]
        entry_result[2] = ecx_14
        entry_result[3] = edx_12
    else
        void* eax_4 = sub_528f30(data_30d951c)
        float var_20
        
        if (arg1 == 0)
            sub_4fc810(&var_20, eax_4 + 0x14fc, eax_4 + 0x14c8)
            *entry_result = var_20
            int32_t var_1c
            entry_result[1] = var_1c
            int32_t var_18
            entry_result[2] = var_18
            int32_t var_14
            entry_result[3] = var_14
        else
            int32_t ecx = *(eax_4 + 0x14cc)
            int32_t edx = *(eax_4 + 0x14d0)
            *entry_result = *(eax_4 + 0x14c8)
            int32_t eax_6 = *(eax_4 + 0x14d4)
            entry_result[1] = ecx
            entry_result[2] = edx
            entry_result[3] = eax_6
        
        int32_t i_1 = 1
        
        if (data_30da51c s> 1)
            int32_t i
            
            do
                void* eax_10 = sub_528f30((&data_30d951c)[i_1])
                float var_48[0x4]
                
                if (arg1 == 0)
                    float var_58
                    sub_4fc810(&var_58, eax_10 + 0x14fc, eax_10 + 0x14c8)
                    var_20 = var_58
                    int32_t var_54
                    int32_t var_1c_1 = var_54
                    int32_t var_50
                    int32_t var_18_1 = var_50
                    int32_t var_4c
                    int32_t var_14_1 = var_4c
                    float* eax_12 = sub_4684b0(entry_result, &var_20, &var_38)
                    int32_t edx_9 = eax_12[1]
                    *entry_result = *eax_12
                    int32_t ecx_10 = eax_12[2]
                    entry_result[1] = edx_9
                    int32_t edx_10 = eax_12[3]
                    entry_result[2] = ecx_10
                    entry_result[3] = edx_10
                else
                    sub_4684b0(entry_result, eax_4 + 0x14c8, &var_48)
                i = i_1 + 1
                i_1 = i
            while (i s< data_30da51c)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return entry_result
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return entry_result
}
