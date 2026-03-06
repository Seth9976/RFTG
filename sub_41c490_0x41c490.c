// 函数名称: sub_41c490
// 虚拟地址: 0x41c490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_41c490(int32_t arg1 @ esi, int32_t* arg2 @ edi, int32_t arg3)
{
    // 第一条实际指令: void* eax
    void* eax
    int32_t ecx
    int32_t edx
    
    if (arg2[1] == 1)
        void* eax_1 = data_27e7a54
        *(eax_1 + 0x20c) -= 1
        ecx, edx = sub_408a40()
        eax = data_27e7a54
        *(eax + 0x20c) += 1
    
    eax.b = data_27e7a40 != 0
    
    if (eax.b == 0)
        sub_4075c0()
    
    void* result = sub_42dd70(eax, edx, ecx, arg2, 0, 1, arg1)
    
    if (result.b != 0)
        void* esi = *(data_27e7a40 + 0x548)
        
        while (*(esi + 0x2c0a2) != 0)
            sub_42f1b0()
        
        int32_t var_14_1 = arg3
        result = sub_41bb40()
        int32_t* esi_2 = *(data_27e7a40 + 0x548) + 0x45848
        
        if (*esi_2 != 0)
            result = sub_406d90(esi_2)
        
        if (arg2[1] == 1)
            result = data_27e7a54
            *(result + 0x20c) -= 1
    
    if (eax.b != 0)
        return result
    
    return sub_407670()
}
