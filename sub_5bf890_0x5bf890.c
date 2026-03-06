// 函数名称: sub_5bf890
// 虚拟地址: 0x5bf890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5bf890(int16_t arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t* result = arg3
    char* ecx = sub_5c1430(*(arg2 + 0x34), &var_8, arg1, 0, 0x300, nullptr)
    
    if (ecx != 0)
        char* eax_1
        eax_1.w = var_8.w
        
        if (eax_1.w u>= 5 && *ecx == 1)
            uint32_t eax_3
            int32_t edx
            edx:eax_3 = sx.q(zx.d(eax_1.w))
            char* eax_4 = sub_5c0ee0(ecx, eax_3, edx)
            
            if (eax_4 == 0)
                return result
            
            sub_5c0e70(eax_4)
            uint32_t eax_6 = sub_5c0d30(eax_4)
            
            if (sub_5bf100(result) == eax_6)
                uint32_t eax_9 = zx.d(sub_5c0ec0(eax_4))
                int32_t eax_10
                int32_t edx_1
                edx_1:eax_10 = sx.q(eax_9)
                int32_t* result_1 =
                    sub_5bf2e0(sub_5c0c80(eax_4, eax_10, edx_1), eax_9.w, 0x800, nullptr)
                
                if (result_1 != 0)
                    sub_5bf1f0(result)
                    result = result_1
            
            sub_5c0c20(eax_4)
    
    return result
}
