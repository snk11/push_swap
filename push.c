/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/01 13:33:57 by syusof            #+#    #+#             */
/*   Updated: 2016/11/18 14:46:39 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_lst **lstb, t_lst **lsta)
{
	t_lst	*lstmp;

	if (*lsta)
	{
		if(!(*lstb))
		{
			*lstb = *lsta;
			*lsta = (*lsta)->next;
			(*lstb)->next = NULL;
		}
		else
		{
			lst_add(lstb,lsta);
		}
	}
}

void	push1(t_lst **lstb, t_lst ****lsta)
{
	t_lst	*lstmp;

	if (***lsta)
	{
		if(!(*lstb))
		{
			*lstb = ***lsta;
			***lsta = (***lsta)->next;
			(*lstb)->next = NULL;
		}
		else
		{
			lst_add3(lstb,&lsta);
		}
	}
}

void	push2(t_lst ****lstb, t_lst **lsta)
{
	t_lst	*lstmp;

	if (*lsta)
	{
		if(!(***lstb))
		{
			***lstb = *lsta;
			*lsta = (*lsta)->next;
			(***lstb)->next = NULL;
		}
		else
		{
			lst_add6(&lstb,&lsta);
		}
	}
}

void	push3(t_lst ***lstb, t_lst **lsta)
{
	t_lst	*lstmp;

	if (*lsta)
	{
		if(!(**lstb))
		{
			**lstb = *lsta;
			*lsta = (*lsta)->next;
			(**lstb)->next = NULL;
		}
		else
		{
			lst_add7(&lstb,&lsta);
		}
	}
}

void	push4(t_lst **lstb, t_lst ***lsta)
{
	t_lst	*lstmp;

	if (**lsta)
	{
		if(!(*lstb))
		{
			*lstb = **lsta;
			**lsta = (**lsta)->next;
			(*lstb)->next = NULL;
		}
		else
		{
			lst_add8(&lstb,&lsta);
		}
	}
}

void	push5(t_lst ***lstb, t_lst *****lsta)
{
	t_lst	*lstmp;

	if (****lsta)
	{
		if(!(**lstb))
		{
			**lstb = ****lsta;
			****lsta = (****lsta)->next;
			(**lstb)->next = NULL;
		}
		else
		{
			lst_add10(&lstb,&lsta);
		}
	}
}

void	push6(t_lst *****lstb, t_lst ***lsta)
{
	t_lst	*lstmp;

	if (**lsta)
	{
		if(!(****lstb))
		{
			****lstb = **lsta;
			**lsta = (**lsta)->next;
			(****lstb)->next = NULL;
		}
		else
		{
			lst_add11(&lstb,&lsta);
		}
	}
}

void	push7(t_lst ******lstb, t_lst ****lsta)
{
	t_lst	*lstmp;

	if (***lsta)
	{
		if(!(*****lstb))
		{
			*****lstb = ***lsta;
			***lsta = (***lsta)->next;
			(*****lstb)->next = NULL;
		}
		else
		{
			lst_add12(&lstb,&lsta);
		}
	}
}

void	push8(t_lst *******lstb, t_lst *****lsta)
{
	t_lst	*lstmp;

	if (****lsta)
	{
		if(!(******lstb))
		{
			******lstb = ****lsta;
			****lsta = (****lsta)->next;
			(******lstb)->next = NULL;
		}
		else
		{
			lst_add16(&lstb,&lsta);
		}
	}
}

void	push9(t_lst ****lstb, t_lst ***lsta)
{
	t_lst	*lstmp;

	if (**lsta)
	{
		if(!(***lstb))
		{
			***lstb = **lsta;
			**lsta = (**lsta)->next;
			(***lstb)->next = NULL;
		}
		else
		{
			lst_add17(&lstb,&lsta);
		}
	}
}

void	push10(t_lst ***lstb, t_lst ****lsta)
{
	t_lst	*lstmp;

	if (***lsta)
	{
		if(!(**lstb))
		{
			**lstb = ***lsta;
			***lsta = (***lsta)->next;
			(**lstb)->next = NULL;
		}
		else
		{
			lst_add18(&lstb,&lsta);
		}
	}
}

void	push11(t_lst *****lstb, t_lst ****lsta)
{
	t_lst	*lstmp;

	if (***lsta)
	{
		if(!(****lstb))
		{
			****lstb = ***lsta;
			***lsta = (***lsta)->next;
			(****lstb)->next = NULL;
		}
		else
		{
			lst_add19(&lstb,&lsta);
		}
	}
}

void	push12(t_lst ****lstb, t_lst *****lsta)
{
	t_lst	*lstmp;

	if (****lsta)
	{
		if(!(***lstb))
		{
			***lstb = ****lsta;
			****lsta = (****lsta)->next;
			(***lstb)->next = NULL;
		}
		else
		{
			lst_add20(&lstb,&lsta);
		}
	}
}

void	push13(t_lst ******lstb, t_lst *****lsta)
{
	t_lst	*lstmp;

	if (****lsta)
	{
		if(!(*****lstb))
		{
			*****lstb = ****lsta;
			****lsta = (****lsta)->next;
			(*****lstb)->next = NULL;
		}
		else
		{
			lst_add21(&lstb,&lsta);
		}
	}
}

void	push14(t_lst *****lstb, t_lst ******lsta)
{
	t_lst	*lstmp;

	if (*****lsta)
	{
		if(!(****lstb))
		{
			****lstb = *****lsta;
			*****lsta = (*****lsta)->next;
			(****lstb)->next = NULL;
		}
		else
		{
			lst_add22(&lstb,&lsta);
		}
	}
}
