// 函数名称: sub_670a80
// 虚拟地址: 0x670a80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_670a80(void* arg1, int32_t arg2, char* arg3, char* arg4, char* arg5, PSTR arg6)
{
    // 第一条实际指令: char* var_14 = nullptr
    char* var_14 = nullptr
    int32_t var_2c = 0
    int32_t var_28 = 0
    int32_t var_24 = 0
    int32_t var_34 = 0
    int32_t result = sub_670650(arg1, arg3, &var_14)
    
    if (result == 0)
        return result
    
    char* var_18
    int32_t eax_1 = sub_670650(arg1, arg4, &var_18)
    int32_t var_c = eax_1
    
    if (eax_1 == 0)
        sub_664100(arg1, "Empty language field in iTXt chunk")
        var_18 = nullptr
        var_c = 0
    
    int32_t var_10_1
    
    if (arg5 != 0)
        var_10_1 = lstrlenA(arg5)
    else
        var_10_1 = 0
    
    int32_t eax_4
    
    if (arg6 != 0)
        eax_4 = lstrlenA(arg6)
    else
        eax_4 = 0
    
    int32_t eax_5 = sub_66f490(eax_4, arg1, eax_4, &var_34, arg6, arg2 - 2)
    sub_66f010(arg1, eax_5 + var_10_1 + var_c + result + 5)
    
    if (arg1 != 0)
        char* edi_3 = var_14
        
        if (edi_3 != 0 && result != 0xffffffff)
            sub_666640(arg1, edi_3, result + 1)
            sub_662280(arg1, edi_3, result + 1)
    
    char var_8
    
    if (arg2 != 1)
        var_8 = 1
    
    if (arg2 == 1 || arg2 == 0xffffffff)
        var_8 = 0
    
    char var_7_1 = 0
    
    if (arg1 != 0)
        sub_666640(arg1, &var_8, 2)
        sub_662280(arg1, &var_8, 2)
    
    char* edi_4 = var_18
    var_8 = 0
    
    if (edi_4 == 0)
        edi_4 = &var_8
    
    int32_t ebx_5 = var_c + 1
    
    if (arg1 != 0 && edi_4 != 0 && ebx_5 != 0)
        sub_666640(arg1, edi_4, ebx_5)
        sub_662280(arg1, edi_4, ebx_5)
    
    char* edi_5 = arg5
    
    if (edi_5 == 0)
        edi_5 = &var_8
    
    if (arg1 != 0 && edi_5 != 0 && var_10_1 != 0xffffffff)
        sub_666640(arg1, edi_5, var_10_1 + 1)
        sub_662280(arg1, edi_5, var_10_1 + 1)
    
    sub_66f710(&var_34, eax_5, arg1, eax_5)
    
    if (arg1 != 0)
        int32_t eax_10 = *(arg1 + 0x124)
        var_c.b = (eax_10 u>> 0x18).b
        var_c:1.b = (eax_10 u>> 0x10).b
        *(arg1 + 0x2ac) = 0x82
        var_c:2.b = (eax_10 u>> 8).b
        var_c:3.b = eax_10.b
        sub_666640(arg1, &var_c, 4)
    
    sub_666530(arg1, var_14)
    return sub_666530(arg1, var_18)
}
